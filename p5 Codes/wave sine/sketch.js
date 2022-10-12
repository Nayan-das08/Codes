let x = 0;
let y = 0;
let T;
let angle = 0;
let waveCanvas;

function setup() {
  createCanvas(750, 563);
  waveCanvas = createGraphics(750, 563);
  angleMode(DEGREES);
  //background(0);
  T = width;
  frameRate(60*10);
  waveCanvas.clear();
}

function draw() {
  wave();     //trail 
  readings(); //no trail
  
  image(waveCanvas, 0, 0);  //putting clear canvas/waveCanvas on top of everything
  //when point is drawn on waveCanvas, the waveCanvas isn't placed
  //it is placed after readings(), i.e. placed above text()

  //by convention, the canvas which holds the non trailing drawing is the the default canvas

  if (x < width)
    x++;
  else
    frameRate(0);
    
}

function readings() {
  //y = 100 * sin(360 * x / T);

  /*image(waveCanvas, 0, 0);
  waveCanvas.stroke(0);
  waveCanvas.fill(255);
  waveCanvas.textSize(20);
  waveCanvas.textAlign(RIGHT);
  waveCanvas.text(x, width - 100, 20);*/
  
  //waveCanvas.text((y / 100), width - 100, 50);

  /*image(waveCanvas, 0, 0);
  */
  background(0);  //no trail
  stroke(0);
  fill(255);
  textSize(20);
  textFont('Consolas')
  textAlign(RIGHT);
  text(`x = ${x}, T = ${T}`, width - 100, 20);
  text(`sin(2*pi*x/T) = ${sin(360 * x / T).toFixed(2)}`, width - 100, 50);
  textAlign(LEFT);
  text('sine wave', 50, 20);
}

function wave() {
  
  waveCanvas.stroke(255);
  waveCanvas.strokeWeight(1);
  waveCanvas.line(0, height / 2, width, height / 2);
  waveCanvas.line(T / 2, 0, T / 2, height);
  waveCanvas.strokeWeight(5);

  
  /*stroke(255);
  strokeWeight(1);
  line(0, height / 2, width, height / 2);
  line(T / 2, 0, T / 2, height);
  strokeWeight(5);
  */

  y = 100 * sin(360 * x / T);
  waveCanvas.point(x, (height / 2) - y);
  //point(x, (height / 2) + y);

}

