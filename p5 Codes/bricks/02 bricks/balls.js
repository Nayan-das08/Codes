class Balls {
  constructor(board) {

    this.touchBoard = 0;
    this.radius = 20;
    this.board = board;

    this.position = createVector(
      random(this.radius, width - this.radius),
      height / 3);
    this.speed = createVector(5, 5);

    this.col = color(random(150, 255), random(150, 255), random(150, 255));
    this.score = 0;
  }

  show() {
    fill(this.col);
    strokeWeight(2);
    circle(this.position.x, this.position.y, 2 * this.radius);
  }


  bounceEdge() {
    if (this.position.x > width - this.radius || this.position.x < this.radius)
      this.speed.x *= -1;

    if (this.position.y < this.radius)
      this.speed.y *= -1;

  }

  bounceBoard() {
    if (this.position.y > this.board.floor - this.radius) {
      if (this.position.x > mouseX - (this.board.length / 2) - 15 &&
        this.position.x < mouseX + (this.board.length / 2) + 15) {
        this.speed.y *= -1;
        this.touchBoard++;
        //getScore();
        this.score++;
      } else
        this.gameOver();
    }
  }

  getScore() {

  }

  raiseHt() {
    if (this.touchBoard == 3 && this.position.y < this.board.floor / 2 && this.speed.y < 0) {
      this.board.floor -= this.board.breadth;
      this.touchBoard = 0;
      this.board.length -= 5;
      this.speed.add(0.05, 0.05)
    }
  }

  move() {
    this.position.add(this.speed);
    this.raiseHt();
  }

  gameOver() {
    if (this.position.y > this.board.floor) //this is done as the condition in
      //bounceEdge() checks this.position.y till this.board.floor-this.radius
      //Now it will check a little below the board
      //The reason for this condition in mainly 'Aesthetics'
      frameRate(0);

    textSize(50);
    textFont('Consolas');
    fill(0);
    stroke(0);
    strokeWeight(1.5);
    text('uff, GAME OVER!', (width / 2) - (textWidth('uff, GAME OVER!') / 2), height / 2);
    textSize(30);
    text(`Your score : ${this.score}`, (width / 2) - (textWidth('Your score :  ') / 2), height / 2 + 40);

  }

}