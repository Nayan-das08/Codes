let walker

function setup() {
  createCanvas(windowWidth, windowHeight);
  stroke(255);
  strokeWeight(2);
  walker = new Walk(100, 300);
  background(0);
}

function draw() {
  walker.move();
  walker.show();
}