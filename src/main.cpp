
#include "../includes/vec3.h"
#include "../includes/color.h"
#include "../includes/hittable.h"
#include "../includes/hittable_list.h"
#include "../includes/sphere.h"
#include "../includes/camera.h"


int main() {
    //check-1
    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width  = 400;
    cam.samples_per_pixel = 100;

    cam.render(world);
}
