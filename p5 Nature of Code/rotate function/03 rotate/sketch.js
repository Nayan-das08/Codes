let angle = 0;

function setup() {
  createCanvas(windowWidth, windowHeight);
  background(0);
  
}

function draw() {
  //background(0);
  fill(255);
  
  rotate(angle);
  translate(mouseX, mouseY);

  rectMode(CENTER);
  rect(0, 0, 100, 100);
  angle += 0.05;
}