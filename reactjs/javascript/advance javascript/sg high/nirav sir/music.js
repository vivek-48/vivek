let now_playing=document.querySelector('.now-playing');
let art=document.querySelector('.art');
let name=document.querySelector('.name');
let artist=document.querySelector('.artist');


let prev_track=document.querySelector('.prev-track');
let playpause=document.querySelector('.playpause');
let next_track=document.querySelector('.next-track');

let current_time=document.querySelector('.current-time');
let seek_slider=document.querySelector('.seek_slider');
let total_duration=document.querySelector('.total-duration');

let volume_slider=document.querySelector('.volume_slider');



let track_index = 0;
let isPlaying = false;
let updateTimer;

let curr_track = document.createElement('audio');

let track_list = [
    {
      name: "Night Owl",
      artist: "Broke For Free",
      image: "Image URL",
      path: "Night_Owl.mp3"
    },
    {
      name: "Enthusiast",
      artist: "Tours",
      image: "Image URL",
      path: "Enthusiast.mp3"
    },
    {
      name: "Shipping Lanes",
      artist: "Chad Crouch",
      image: "Image URL",
      path: "Shipping_Lanes.mp3",
    },
  ];

  

