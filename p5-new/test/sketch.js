function setup() 
{
    Width = windowWidth
    Height = windowHeight
    createCanvas(Width, Height)
    trail_canvas = createGraphics(width, height)
    // trail_canvas.background(100,0,100)
    trail_canvas.clear()

    radius = 50
    x = random(radius, Width-radius)
    y = random(radius, Height-radius)
    x_dir = y_dir = 1
    vel = 2
    fill(random(255), random(255), random(255))
}


function draw() 
{
    // image(trail_canvas,0,0)
    background(100,200,200)
    image(trail_canvas,0,0)
    
    strokeWeight(2)
    circle(x, y, radius*2)
    trail_canvas.strokeWeight(5)
    trail_canvas.point(x,y)

    if (x < radius || x > Width-radius)
    {
        x_dir *= -1
        // fill(random(255), random(255), random(255))
    }
    if (y < radius || y > Height-radius)
    {
        y_dir *= -1
        // fill(random(255), random(255), random(255))
    }

    x += vel*x_dir
    y += vel*y_dir

}

function mousePressed()
{
    noLoop()
}
