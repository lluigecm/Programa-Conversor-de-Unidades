// Celsius para Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Celsius para Kelvin
float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

// Fahrenheit para Celsius
float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Fahrenheit para Kelvin
float fahrenheitParaKelvin(float fahrenheit) {
    float celsius = fahrenheitParaCelsius(fahrenheit);
    return celsius + 273.15;
}

// Kelvin para Celsius
float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

// Kelvin para Fahrenheit
float kelvinParaFahrenheit(float kelvin) {
    float celsius = kelvinParaCelsius(kelvin);
    return celsiusParaFahrenheit(celsius);
}
