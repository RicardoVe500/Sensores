var SerialPort = require('serialport');
var port = new SerialPort('COM3', {
  baudRate: 57600
});

port.on('data', function (data) {
  console.log('Data:', data);
});
