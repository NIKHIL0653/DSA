class Solution {
    public int[] processQueries(int c, int[][] connections, int[][] queries) {
        Map<Integer, List<Integer>> graph = new HashMap<>();
        for (int i = 1; i <= c; i++) {
            graph.put(i, new ArrayList<>());
        }

        for (int[] conn : connections) {
            int u = conn[0];
            int v = conn[1];
            graph.get(u).add(v);
            graph.get(v).add(u);
        }

        Set<Integer> offline = new HashSet<>();
        List<Integer> result = new ArrayList<>();

        for (int[] query : queries) {
            int type = query[0];
            int station = query[1];

            if (type == 1) {
                if (!offline.contains(station)) {
                    result.add(station);
                } else {
                    int minOnline = bfsFindMinOnline(station, graph, offline);
                    result.add(minOnline);
                }
            } else if (type == 2) {
                offline.add(station);
            }
        }

        return result.stream().mapToInt(i -> i).toArray();
    }

    private int bfsFindMinOnline(int start, Map<Integer, List<Integer>> graph, Set<Integer> offline) {
        Set<Integer> visited = new HashSet<>();
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(start);
        visited.add(start);

        int minOnline = Integer.MAX_VALUE;
        boolean foundOnline = false;

        while (!queue.isEmpty()) {
            int curr = queue.poll();
            if (!offline.contains(curr)) {
                foundOnline = true;
                minOnline = Math.min(minOnline, curr);
            }
            for (int neighbor : graph.get(curr)) {
                if (!visited.contains(neighbor)) {
                    visited.add(neighbor);
                    queue.offer(neighbor);
                }
            }
        }
        return foundOnline ? minOnline : -1;
    }
}
