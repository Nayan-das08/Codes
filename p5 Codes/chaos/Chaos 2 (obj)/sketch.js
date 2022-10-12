let ball = {
  x: undefined,
  y: undefined,
  radius: 50,
};

function setup() {
  createCanvas(768, 720);   //half window resolution
  ball.x = width / 2;
  ball.y = height / 2;
  background(0);

}

function draw() {
  move();
  display();  
}

function display() {
  circle(ball.x, ball.y, ball.radius);
}

function move() {
  ball.x += random(-10, 10);
  ball.y += random(-10, 10);

  if (ball.x < ball.radius || ball.x > width - ball.radius)
    ball.x = random(ball.radius, width - ball.radius);

  if (ball.y < ball.radius || ball.y > height - ball.radius)
    ball.y = random(ball.radius, height - ball.radius);
}
