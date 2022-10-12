class bounce {
  r = random(255);
  g = random(255);
  b = random(255);

  constructor(rad) {
    this.radius = rad;
    this.position = createVector(random(this.radius, width - this.radius),200);
      //random(this.radius, height - this.radius));
    this.speed = createVector(random(-7, 7), 0);
    this.acc = createVector(0, 0);
  }

  display() {
    fill(this.r, this.g, this.b);
    circle(this.position.x, this.position.y, 2 * this.radius);
  }

  move() {  //the retardation of speed when ball moves up is because of
    //Euler integration
    this.speed.add(this.acc);
    this.position.add(this.speed);
    this.checkEdge();
  }

  checkEdge() {
    if (this.position.y >= height - this.radius) {
      this.position.y = height - this.radius;
      this.speed.y *= -1;
      //fill(random(255), random(255), random(255));
    }
    if (this.position.x < this.radius || this.position.x > width - this.radius) {
      this.speed.x *= -1;
      //fill(random(255), random(255), random(255));
    }

  }

  applyForce(force) {
    this.acc.add(force);
  }

  texts() {
    push();
    textFont('Consolas');
    textAlign(RIGHT);
    textFont(25);
    stroke(0);
    text(`y = ${this.position.y.toFixed(1)}`, width - 20, 20);
    text(`speed = ${this.speed.y.toFixed(1)}`, width - 20, 40);
    text(`acceleration = ${this.acc.y}`, width - 20, 60);
    text(`frameCount = ${frameCount}`, width - 20, 80);
    pop();
  }

}