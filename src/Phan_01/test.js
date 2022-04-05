// create random number generator
var randomNumber = function (min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
};

// find all images without alternate text
// and give them a red border
var findImagesWithoutAlt = function () {
    var images = document.getElementsByTagName('img');
    for (var i = 0; i < images.length; i++) {
        if (images[i].alt === '') {
            images[i].style.border = '1px solid red';
        }
    }
}


