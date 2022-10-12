let x;
let y;
let radius = 30;
let x_dir = 1;
let y_dir = 1;
let x_rate = 5;
let y_rate = 5;

function setup() {
  createCanvas(windowWidth, windowHeight);
  x = random(50, width - radius);
  y = random(50, height - radius);
  //background(100, 160, 160);
  //noStroke();
  strokeWeight(2);
}

function draw() {
  background(100, 160, 160);

  circle(x, y, 2 * radius);

  if (x > (width - radius) || x < radius) {
    x_dir *= -1;
    fill(random(0, 255), random(0, 255), random(0, 255));
  }

  if (y > (height - radius) || y < radius) {
    y_dir *= -1;
    fill(random(0, 255), random(0, 255), random(0, 255));
  }

  x = x + x_rate * x_dir;
  y = y + y_rate * y_dir;

}



function mousePressed() {
  x = random(50, width - radius);
  y = random(50, height - radius);
  fill(random(0, 255), random(0, 255), random(0, 255));
}