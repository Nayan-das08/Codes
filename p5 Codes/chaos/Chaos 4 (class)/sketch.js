let ball_a, ball_b;
let stop_move = 0;

class chaos {
  constructor(R) { //R, G, B, A=0) {
    this.radius = R;
    this.x = random(this.radius, width - this.radius) //width / 2;
    this.y = random(this.radius, width - this.radius) //height / 2;
    this.r = random(100, 255);
    this.g = random(100, 255);
    this.b = random(100, 255);
  }
  move() { //'this' refers to ANY object created under the class 
    this.x += random(-5, 5);
    this.y += random(-5, 5);

    if (this.x < this.radius || this.x > width - this.radius)
      this.x = width / 2;
    if (this.y < this.radius || this.y > height - this.radius)
      this.y = height / 2;
  }
  disp() {
    fill(this.r, this.g, this.b);
    strokeWeight(0.5);
    circle(this.x, this.y, this.radius);
  }
}

function setup() {
  //half window resolution -> 767x712
  //4:3 resolution -> 750x563
  //3:2 resolution -> 600x400
  createCanvas(600, 400);
  background(0);
  ball_a = new chaos(20);
  ball_b = new chaos(40);
}

function draw() {
  //background(0);
  ball_a.disp();
  ball_b.disp();

  if (stop_move == 0) {
    ball_a.move();
    ball_b.move();
  }
}

function mouseClicked() {
  if (stop_move == 0)
    stop_move = 1;
  else if (stop_move == 1) {
    stop_move = 0;
    frameRate(60);
  }
}