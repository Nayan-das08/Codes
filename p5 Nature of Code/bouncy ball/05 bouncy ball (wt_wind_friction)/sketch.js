let ball = [];
let gravity;
let wind;
let n = 2; //number of balls
let weight = [];

function setup() {
  createCanvas(windowWidth, windowHeight);
  gravity = createVector(0, 1);
  wind = createVector(1, 0);

  for (let i = 0; i < n; i++) {
    ball[i] = new bounce(6, 5);
    //ball objects
    weight[i] = p5.Vector.mult(gravity, ball[i].mass);
    //the force 'm*g = mass*acc. due to gravity'
  }
  //frameRate(5);
  //background(0);
}

function draw() {
  background(0);

  for (let i = 0; i < n; i++) {
    ball[i].applyForce(weight[i]);
    ball[i].applyFriction(0.75);

    ball[i].display();
    ball[i].move();
  }


  if (mouseIsPressed) {
    //once the force of wind is removed the balls follow the 
    //Newton's First Law of Motion
    for (let i = 0; i < n; i++) 
      ball[i].applyForce(wind);
  }

}