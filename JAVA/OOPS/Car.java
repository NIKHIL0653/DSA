package OOPS;

import java.awt.*; // awt -> abstract window type

public class Car {

    double AvgMilesPerGallon;
    String LicensePlate;
    Color PaintColor;
    boolean AreTailLightsWorking;

    // we've made the variables now to bring them together
    // we make a constructor -> used to construct an object

    public Car(double inputAvgMilesPerGallon, String inputLicensePlate,
               Color inputPaintColor, boolean inputAreTailLightsWorking) {
        this.AvgMilesPerGallon = inputAvgMilesPerGallon;
        this.LicensePlate = inputLicensePlate;
        this.PaintColor = inputPaintColor;
        this.AreTailLightsWorking = inputAreTailLightsWorking;
        // this keyword is a reference to the new car we are creating
        // we are setting the car properties to the input values we are initializing a new car
    }




}
