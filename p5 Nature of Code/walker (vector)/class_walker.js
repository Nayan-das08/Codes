class Walk {
  constructor(x, y) {
    this.pos = createVector(x, y);
    //makes 'pos' an object of p5.Vector class
  }

  move() {
    this.pos.x += random(-1, 1);
    this.pos.y += random(-1, 1);
  }

  show() {
    point(this.pos.x, this.pos.y);
  }
}