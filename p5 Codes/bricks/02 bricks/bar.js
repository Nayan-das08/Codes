class Bar {
  constructor() {
    this.breadth = 20;
    this.length = 150;
    this.floor = height - 50;
  }

  disp() {
    fill(0);
    rectMode(CENTER);
    rect(mouseX, this.floor + (this.breadth / 2),
      this.length, this.breadth);
  }
}