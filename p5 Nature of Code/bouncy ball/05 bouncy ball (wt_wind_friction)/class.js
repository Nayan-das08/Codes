class bounce {
  colour = color(random(255), random(255), random(255));

  constructor(m, x_speed) {
    this.mass = m
    this.radius = sqrt(this.mass) * 20; //a proper mapping of mass to radius
    this.position = createVector(random(this.radius, width-this.radius), 400);
      //random(this.radius, height-this.radius));
    this.speed = createVector(x_speed, 0);
    this.acc = createVector(0, 0);

  }

  display() {
    //fill(this.r, this.g, this.b);
    fill(this.colour);
    circle(this.position.x, this.position.y, this.radius * 2);
  }

  move() {
    //the retardation of speed when ball moves up 
    //is because of Euler integration inaccuracies of infinitesimals
    this.speed.add(this.acc);
    this.position.add(this.speed);
    this.checkEdge();
    this.acc.mult(0); //reqd to make the acc.= 0 so that when mouse is not
    //pressed, the vector doesnt have the value of wind included in it
    //not needed earlier as there was only one source of force ie gravity
    //and it was always present. Also, the fn. applyForce() has to be
    //called for every frame to update the value of the acc.
  }

  checkEdge() {
    if (this.position.y >= height - this.radius) {
      this.position.y = height - this.radius;
      this.speed.y *= -1;
    }
    if (this.position.x < this.radius ||
      this.position.x > width - this.radius) {
      this.speed.x *= -1;
    }

  }

  applyForce(force) {
    let a = p5.Vector.div(force, this.mass);
    //the vector 'a' denotes the acceleration due to the vector 'force'
    //on 'mass', a = force/mass
    //when weight = m*g is passed as arg., a = m*g/m = g (independent of mass)
    //when 'wind' vector is passed as arg., a is dependent on mass of the ball 
    this.acc.add(a);
  }

  applyFriction(coeff) {
    let diff = height - (this.position.y + this.radius);
    if (diff < 1) {
      let friction = this.speed.copy();
      //let friction = createVector(this.speed.x, this.speed.y);
      friction.normalize();
      friction.mult(-1);
      friction.setMag(coeff * this.mass * 1);
      this.applyForce(friction);
      console.log(this.speed.y);
    }
  }

  texts() {
    push();
    textFont('Consolas');
    textAlign(RIGHT);
    textFont(30);
    stroke(0);
    fill(255);
    text(`y = ${this.position.y.toFixed(1)}`, width - 20, 20);
    text(`y_speed = ${this.speed.y.toFixed(1)}`, width - 20, 40);
    text(`x_speed = ${this.speed.x.toFixed(1)}`, width - 20, 60);
    text(`frameCount = ${frameCount}`, width - 20, 80);
    pop();
  }

}