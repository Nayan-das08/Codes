let position;
let origin;
let length = 350;
let radius = 30;
let angle;

function setup() {
  createCanvas(windowWidth, windowHeight);
  angle = 0;//PI/4;
  origin = createVector(0, 20);
  position = createVector(length*sin(angle), length*cos(angle));
  //frameRate(10);
}

function draw() {
  background(0);
  translate(width/2, 0);
  
  //texts();
  show();
  move();
}

function move() {
  position.x = length*sin(angle);
  position.y = length*cos(angle);
  angle += 0.1;
}

function show() {
  stroke(255);
  strokeWeight(5);
  point(origin.x, origin.y);
  strokeWeight(1);

  line(origin.x, origin.y, position.x, position.y);
  circle(position.x, position.y, 2*radius);
}

function texts() {
  fill(255);
  text(`x = ${position.x}`, width/2-100, 20);
  text(`y = ${position.y}`, width/2-100, 40);
}