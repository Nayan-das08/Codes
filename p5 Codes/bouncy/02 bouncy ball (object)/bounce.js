/*let x;
let y;
let radius = 30;
let x_dir = 1;
let y_dir = 1;
let x_rate = 5;
let y_rate = 5;
*/
let ball = {
  x: 0,  //random(50, width - ball.radius),
  y: 0,  //random(50, height - ball.radius),
//intitialization with library functions doesn't work
  radius: 30,
  x_dir: 1,
  y_dir: 1,
  x_rate: 5,
  y_rate: 5
};

function setup() {
  createCanvas(windowWidth, windowHeight);
  ball.x = random(50, width - ball.radius);
  ball.y = random(50, height - ball.radius);
  //background(100, 160, 160);
  //noStroke();
  strokeWeight(2);
}

function draw() {
  background(100, 160, 160);

  circle(ball.x, ball.y, 2 * ball.radius);

  if (ball.x > (width - ball.radius) || ball.x < ball.radius) {
    ball.x_dir *= -1;
    fill(random(0, 255), random(0, 255), random(0, 255));
  }

  if (ball.y > (height - ball.radius) || ball.y < ball.radius) {
    ball.y_dir *= -1;
    fill(random(0, 255), random(0, 255), random(0, 255));
  }

  ball.x = ball.x + ball.x_rate * ball.x_dir;
  ball.y = ball.y + ball.y_rate * ball.y_dir;

}



function mousePressed() {
  ball.x = random(50, width - ball.radius);
  ball.y = random(50, height - ball.radius);
  fill(random(0, 255), random(0, 255), random(0, 255));
}