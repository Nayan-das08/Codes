let ball_1, ball_2;
let gravity;
let n = 1; //number of balls


function setup() {
  createCanvas(windowWidth, windowHeight);
  gravity = createVector(0, 1); 
  
  ball_1 = new bounce(100, 200, 50, 4);
  ball_2 = new bounce(500, 200, 50, 6);
  //ball objects

  weight_1 = p5.Vector.mult(gravity, ball_1.mass);
  weight_2 = p5.Vector.mult(gravity, ball_2.mass);
  //the force 'm*g = mass*acc. due to gravity'

  ball_1.applyForce(weight_1);
  ball_2.applyForce(weight_2);
}

function draw() {
  background(0);

  ball_1.display();
  ball_1.move();

  ball_2.display();
  ball_2.move();

}