#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData();
    CurrentConditionsDisplay *currentDisplay = new
            CurrentConditionsDisplay(weatherData);



    return a.exec();
}
