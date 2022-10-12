let angle = 0;

function setup() {
  createCanvas(windowWidth, windowHeight);
  background(0);
  
}

function draw() {
  //background(0);
  fill(255);
  translate(mouseX, mouseY);

  //angle = map(mouseX, 0, width, 0, 2*PI);
  rotate(angle);
  
  rectMode(CENTER);
  rect(0, 0, 100, 100);
  angle += 0.1;
}