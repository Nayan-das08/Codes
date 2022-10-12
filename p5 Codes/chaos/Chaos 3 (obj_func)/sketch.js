let ball = {
  x: undefined,
  y: undefined,
  radius: 50,

  disp: function () {
    circle(this.x, this.y, this.radius);
  },
  move: function () {
    this.x += random(-10, 10);
    this.y += random(-10, 10);

    if (this.x < this.radius || this.x > width - this.radius)
      this.x = random(this.radius, width - this.radius);

    if (this.y < this.radius || this.y > height - this.radius)
      this.y = random(this.radius, height - this.radius);
  }
};

function setup() {
  createCanvas(768, 720);   //half window resolution
  ball.x = width / 2;
  ball.y = height / 2;
  background(0);

}

function draw() {
  ball.disp();
  ball.move();
}
/*
function display() {

}

function move() {

}*/