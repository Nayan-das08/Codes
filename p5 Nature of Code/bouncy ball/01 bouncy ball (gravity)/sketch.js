let ball = [];
let gravity;
let n = 1; //number of balls

    
function setup() {
  createCanvas(windowWidth, windowHeight);
  gravity = createVector(0, 0.5);
  for (let i = 0; i < n; i++) {
    ball[i] = new bounce(random(20, 80));
    ball[i].applyForce(gravity);
  }
}

function draw() {
  background(0);
  for (let i = 0; i < n; i++) {
    ball[i].display();
    ball[i].move();
  }
}