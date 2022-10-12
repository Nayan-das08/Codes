let ball_1, ball_2;
let gravity;
let wind;
let n = 1; //number of balls


function setup() {
  createCanvas(windowWidth, windowHeight);
  gravity = createVector(0, 1);
  wind = createVector(1, 0);

  ball_1 = new bounce(100, 200, 6, 0);
  ball_2 = new bounce(100, 200, 4, 0);
  //ball objects

  weight_1 = p5.Vector.mult(gravity, ball_1.mass);
  weight_2 = p5.Vector.mult(gravity, ball_2.mass);
  //the force 'm*g = mass*acc. due to gravity'
  
}

function draw() {
  background(0);

  ball_1.applyForce(weight_1);
  ball_2.applyForce(weight_2);

  ball_1.display();
  ball_1.move();

  ball_2.display();
  ball_2.move();

  if (mouseIsPressed) {
    //once the force of wind is removed the balls follow the 
    //Newton's First Law of Motion
    ball_1.applyForce(wind);
    ball_2.applyForce(wind);
  }

}