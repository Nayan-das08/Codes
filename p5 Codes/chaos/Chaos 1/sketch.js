let x, y;
let radius = 50;

function setup() {
  createCanvas(768, 720);   //half window resolution
  x = width / 2;
  y = height / 2;
  background(0);

}

function draw() {
  circle(x, y, radius);

  x += random(-10, 10);
  y += random(-10, 10);

  if (x < radius || x > width - radius)
    x = width / 2;
  if (y < radius || y > height - radius)
    y = height / 2;
  
  console.log(width);
  console.log(height);
}