class Solution {
    public List<String> validateCoupons(String[] code, String[] businessLine, boolean[] isActive) {
        Set<String> validCategories = new HashSet<>(
            Arrays.asList("electronics", "grocery", "pharmacy", "restaurant"));

        Map<String, List<String>> categoryToCodes = new HashMap<>();

        for (int i = 0; i < code.length; i++) {
            String c = code[i];
            String b = businessLine[i];
            boolean active = isActive[i];

            if (c == null || c.isEmpty() || !c.matches("[a-zA-Z0-9_]+")) continue;
            if (!validCategories.contains(b)) continue;
            if (!active) continue;

            categoryToCodes.putIfAbsent(b, new ArrayList<>());
            categoryToCodes.get(b).add(c);
        }

        List<String> result = new ArrayList<>();
        String[] categoryOrder = {"electronics", "grocery", "pharmacy", "restaurant"};

        for (String category : categoryOrder) {
            List<String> codes = categoryToCodes.getOrDefault(category, new ArrayList<>());
            Collections.sort(codes);
            result.addAll(codes);
        }

        return result;
    }
}