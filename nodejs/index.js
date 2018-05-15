var SerialPort = require('serialport');
var port = new SerialPort('COM3', {
  baudRate: 9600
});

var Sensor1 = 0;
var Sensor1Tmp = 0;
var Estado = 0;

port.on('data', function (data) {
  console.log('Data:', data);
  for(var i =0; i<data.length;i++){
  switch(Estado) {
    case 0:
    if(data[i]==97){
      Estado = 1;
      Sensor1Tmp = 0;
    }
    break;
    case 1:
    if(data[i]==99){
      Sensor1Tmp = Sensor1Tmp;
      Estado = 0;
      console.log("El Valor es: "+Sensor1)
    }else{
    Sensor1Tmp =Sensor1Tmp * 10 + data[i];
    console.log("El Valor es: "+Sensor1Tmp)
  }
    break;
    default:
}

  }
});
