let balls = [];


function setup() {
  createCanvas(768, 720); //half window resolution
  for (let i = 0; i < 3; i++) {
    balls[i] = {
      x: undefined, //values not given here to show that
      y: undefined, //instances can be accessed
      radius: 50,
      disp: function () {
        circle(this.x, this.y, this.radius);
      },
      move: function () {
        this.x += random(-10, 10);
        this.y += random(-10, 10);

        if (this.x < this.radius || this.x > width - this.radius)
          this.x = width / 2;

        if (this.y < this.radius || this.y > height - this.radius)
          this.y = height / 2;
      }
    }
  }
  for (let i = 0; i < 3; i++) {
    balls[i].x = width / 2;
    balls[i].y = height / 2;
  }
  background(0);

}

function draw() {
  for (let i = 0; i < 3; i++) {
    balls[i].disp();
    balls[i].move();
  }
}