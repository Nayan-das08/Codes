let ball_1, ball_2;
let gravity;
let n = 1; //number of balls


function setup() {
  createCanvas(windowWidth, windowHeight);
  gravity = createVector(0, 2); //the force 'm*g = mass*acc. due to gravity'

  ball_1 = new bounce(100, 200, 50, 4);
  ball_1.applyForce(gravity);

  ball_2 = new bounce(500, 200, 50, 6);
  ball_2.applyForce(gravity);
}

function draw() {
  background(0);

  ball_1.display();
  ball_1.move();

  ball_2.display();
  ball_2.move();

}