# UART Environment Sensor

This project is based on an empty template provided by Simplicity Studio, extended to read environmental sensor data and transmit it via UART.

## Features

- Reads environmental data (e.g., temperature)
- Sends measurements over UART as integer values with a scaling factor (*1000)
- Designed to be reused in a separate system via UART communication

## Data Format

The measured values are multiplied by 1000 before being sent through UART.  
This approach avoids floating-point handling while keeping sufficient precision.  
Since this project is intended for integration into another system (e.g., host application), the conversion can be handled on the receiver side.

### Example

For instance, if the temperature is `23.456°C`, the value transmitted via UART will be:

Temperature: 23456 (scaled by *1000)

The receiver can then divide by 1000 to get the original value:

23.456°C

## License

This project uses components provided by Silicon Laboratories Inc.  
See [LICENSE](./LICENSE) for details.