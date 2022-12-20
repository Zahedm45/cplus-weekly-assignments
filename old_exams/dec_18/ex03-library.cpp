#include <iostream>
#include "ex03-library.h"

//Do not modify
TemperatureScalesConverter::TemperatureScalesConverter() {
	//By default we add a measurement of 0 C which corresponds to 32 F.
	CTemperatures.push_back(0);
	FTemperatures.push_back(32);
}

//Exercise 3 (a) Check and correct this method
void TemperatureScalesConverter::print(){
	cout << CTemperatures.size() <<" Celsius measurements:";
	for(int i = 0; i < CTemperatures.size(); i++){
		cout<< " " << CTemperatures[i];
	}
	cout << endl;
	
	cout << FTemperatures.size() <<" Fahrenheit measurements:";
	for(int i = 0;  i < FTemperatures.size(); i++){
		cout<< ' ' << FTemperatures[i];
	}
	cout << endl;
}

//Exercise 3 (b) Implement this method
double TemperatureScalesConverter::convertToF(double CTemperature){
	//put your code here'
    return CTemperature * 1.8 + 32;
}

//Exercise 3 (c) Implement this method
double TemperatureScalesConverter::convertToC(double FTemperature){
	//put your code here
    return (FTemperature -32) * 0.56;
}

//Exercise 3 (d) Implement this method
bool TemperatureScalesConverter::addMeasurement(string scale, double temperature){
	//put your code here

    if (scale == "C") {
        double val = convertToF(temperature);
        FTemperatures.push_back(val);
        CTemperatures.push_back(temperature);
        return true;

    } else if (scale == "F"){
        double val = convertToC(temperature);
        FTemperatures.push_back(temperature);
        CTemperatures.push_back(val);
        return true;
    }


    return false;
}