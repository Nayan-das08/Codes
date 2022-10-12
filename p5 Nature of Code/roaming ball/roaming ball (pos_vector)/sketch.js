/*let ball = {
  x: 0,  //random(50, width - ball.radius),
  y: 0,  //random(50, height - ball.radius),
//intitialization with library functions doesn't work
  radius: 30,
  x_dir: 1,
  y_dir: 1,
  x_rate: 5,
  y_rate: 5
};*/

let ball = [];
let n = 4; //number of balls

function setup() {
  createCanvas(windowWidth, windowHeight);
  //background(100, 160, 160);
  //noStroke();
  for (let i = 0; i < n; i++)
    ball[i] = new bounce(floor(random(20, 100)), floor(random(3, 7)));
}

function draw() {
  background(100, 160, 160);
  for (let i = 0; i < n; i++) {
    ball[i].disp();
    ball[i].move();
  }
  //ball[2].colour.call(ball[2]);
}



function mousePressed() {
  for (let i = 0; i < n; i++) {
    ball[i].p.x = random(ball[i].radius, width - ball[i].radius);
    ball[i].p.y = random(ball[i].radius, height - ball[i].radius);
    //fill(random(0, 255), random(0, 255), random(0, 255));
  }
}