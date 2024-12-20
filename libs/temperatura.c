float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitParaKelvin(float fahrenheit) {
    float celsius = fahrenheitParaCelsius(fahrenheit);
    return celsius + 273.15;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinParaFahrenheit(float kelvin) {
    float celsius = kelvinParaCelsius(kelvin);
    return celsiusParaFahrenheit(celsius);
}
