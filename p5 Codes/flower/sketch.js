let radius = 100;
let x, y, r = 10;
let angle, x_center, y_center;
let i, j;
let n = 1;
let knob, limit = 10;

let colours = [53, 96, 200];

function setup() {
  createCanvas(750, 563);
  x_center = width / 2;
  y_center = height / 2;
}

function draw() {
  background(100, 160, 160);
  flower();

  n = map(mouseX, 0, width, 1, limit);
  knob = map(mouseX, 0, width, 75 + r + 10, width - 75 - r - 10);

  strokeWeight(5);
  line(75, 500, width - 75, 500);
  circle(knob, 500, 2 * r);

}


function flower() {
  strokeWeight(2);
  fill(53, 96, 200);

  for (i = 0; i <= n; i++) {
    angle = i * 2 * PI / n;
    x = radius * cos(angle);
    y = radius * sin(angle);
    circle(x_center + x, y_center + y, radius);
  }

  strokeWeight(2);
  fill(200, 53, 96);
  circle(x_center, y_center, radius);

}