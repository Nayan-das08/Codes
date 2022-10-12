class bounce {
  r = random(100, 255);
  g = random(100, 255);
  b = random(100, 255);

  constructor(radius, speed) {
    this.radius = radius;
    this.p = createVector(random(this.radius, width - this.radius),
      random(this.radius, height - this.radius));
    this.speed = speed;
    this.x_dir = 1;
    this.y_dir = 1;
    /*this.r = random(100, 255);
    this.g = random(100, 255);
    this.b = random(100, 255);*/
  }

  disp() {
    strokeWeight(2);
    //fill(this.r, this.g, this.b);
    circle(this.p.x, this.p.y, 2 * this.radius);
  }

  move() {
    if (this.p.x > (width - this.radius) || this.p.x < this.radius) {
      this.x_dir *= -1;
      //fill(random(255), random(255), random(255));
      //fill(this.r, this.g, this.b);
      //this.colour.apply(this);
      //this.colour();
      this.shake();
      fill(this.r, this.g, this.b);
    }

    if (this.p.y > (height - this.radius) || this.p.y < this.radius) {
      this.y_dir *= -1;
      //fill(random(255), random(255), random(255));
    }

    this.p.x = this.p.x + this.speed * this.x_dir;
    this.p.y = this.p.y + this.speed * this.y_dir;

  }

  colour() {
    fill(random(255), random(255), random(255));
  }

  shake() {
    this.r = random(100, 255);
    this.g = random(100, 255);
    this.b = random(100, 255);
  }
}