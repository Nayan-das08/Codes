let x, y;

function setup() {
  createCanvas(windowWidth, windowHeight);
  textSize(20);
}

function draw() {
  background(0);
  x = Math.PI;
  stroke(255);
  fill(255);
  textFont('consolas')
  textAlign(LEFT);

  y = x.toFixed(4);

  text(`x = ${x}`, 100, 100);
  text(`y = ${y}`, 400, 100);

  text(`x+5 = ${x+5}`, 100, 200);
  text(`y+5 = ${y+5}`, 400, 200);

  text(`x = ${x}`, 100, 300);
  text(`x.toFixed(2) = ${x.toFixed(2)}`, 400, 300);

  x = undefined;
  line(0, height / 2, width, height / 2);
  
  text(`x = ${x}`, 100, 400);
  text(`y = ${y}`, 400, 400);

  text(`x+5 = ${x+5}`, 100, 500);
  text(`y+5 = ${y+5}`, 400, 500);

  text(`x = ${x}`, 100, 600);
  text(`x.toFixed(2) = ${x.toFixed(2)}`, 400, 600);

}