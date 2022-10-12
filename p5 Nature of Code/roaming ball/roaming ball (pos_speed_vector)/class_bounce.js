class bounce {
  r = random(100, 255);
  g = random(100, 255);
  b = random(100, 255);

  constructor(radius, x_speed, y_speed) {
    this.radius = radius;
    this.position = createVector(random(this.radius, width - this.radius),
      random(this.radius, height - this.radius));

    this.speed = createVector(x_speed, y_speed);
    /*this.r = random(100, 255);
    this.g = random(100, 255);
    this.b = random(100, 255);*/
  }

  disp() {
    strokeWeight(2);
    fill(this.r, this.g, this.b);
    circle(this.position.x, this.position.y, 2 * this.radius);
  }

  move() {
    if (this.position.x > (width - this.radius) || this.position.x < this.radius) {
      this.speed.x *= -1;
      this.shake();
    }

    if (this.position.y > (height - this.radius) || this.position.y < this.radius) {
      this.speed.y *= -1;
      this.shake();
    }

    this.position.add(this.speed);
  }

  colour() {
    fill(this.r, this.g, this.b);
  }

  shake() {
    this.r = random(100, 255);
    this.g = random(100, 255);
    this.b = random(100, 255);
  }
}

/*attempts at changing colour
  //fill(random(255), random(255), random(255));
  //fill(this.r, this.g, this.b);
  //this.colour.apply(this);
  //this.colour();
  /*this.shake();
  fill(this.r, this.g, this.b);*/
//bounce.fill(random(255), random(255), random(255));*/