let ball = [];
let n = 10; //number of balls

function setup() {
  createCanvas(windowWidth, windowHeight);
  //background(100, 160, 160);
  //noStroke();
  for (let i = 0; i < n; i++)
    ball[i] = new bounce(floor(random(20, 100)), floor(random(3, 7)), floor(random(3, 7)));
}

function draw() {
  background(100, 160, 160);
  for (let i = 0; i < n; i++) {
    ball[i].disp();
    ball[i].move();
  }
}



function mousePressed() {
  for (let i = 0; i < n; i++) {
    ball[i].position.x = random(ball[i].radius, width - ball[i].radius);
    ball[i].position.y = random(ball[i].radius, height - ball[i].radius);
    //fill(random(0, 255), random(0, 255), random(0, 255));
  }
}