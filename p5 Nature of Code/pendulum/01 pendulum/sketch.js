let origin;
let bob;
let arm = 300;
let angle = 0;
let velocity = 0.1;
let acc;
let gravity = 0.01;  //force of gravity

function setup() {
  createCanvas(windowWidth, windowHeight);
  stroke(255);
  origin = createVector(0, 0);
  bob = createVector(0, arm);
  
}

function draw() {
  background(0);
  translate(width/2, 0);

  bob.x = origin.x + arm * sin(angle);
  bob.y = origin.y + arm * cos(angle);

  line(origin.x, origin.y, bob.x, bob.y);
  circle(bob.x, bob.y, 40);
  
  acc = -gravity * sin(angle);
  
  velocity += acc;
  angle += velocity;
}