let board, Ball;

function setup() {
  createCanvas(windowWidth, windowHeight);
  board = new Bar();
  Ball = new Balls(board);

}

function draw() {
  background(100, 100, 160);
  Ball.show();
  Ball.bounceEdge();
  Ball.bounceBoard();
  Ball.move();

  board.disp();

  push();
  textSize(20);
  textAlign(RIGHT);
  textFont('Calibri');
  strokeWeight(1);
  stroke(0);
  text(`Score = ${Ball.score}`, width - 20, 20);
  pop();
}
