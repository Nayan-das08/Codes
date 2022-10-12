let angle;

function setup() {
  createCanvas(windowWidth, windowHeight);
  background(0);
  
}

function draw() {
  //background(0);
  fill(255);
  angle = map(mouseX, 0, width, 0, PI/2);
  rotate(angle);
  
  rectMode(CENTER);
  rect(300, 0, 100, 50);
  
  rectMode(CENTER);
  rect(500, 0, 100, 50);
  console.log(mouseX);
}