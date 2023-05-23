btn_tag=document.getElementById('btn')
header_tag=document.getElementById('hd')
btn_tag.addEventListener("click",() =>
{
    btn_tag.style.outline="2px solid white ";
})
btn_tag.addEventListener("mouseleave",() =>
{
    btn_tag.style.outline="none";
})
div_tag=document.getElementById('nav2')


function scrollEffect()
{
    img_tag=document.getElementById('img')
    brand_div=document.getElementById('brand')
    about_tag=document.getElementById('color2');
    console.log(about_tag)
    if(document.documentElement.scrollTop > 400)
    {
        img_tag.style.display = "none";
        brand_tag.style.display = "block";
         
    }
    // else if(document.documentElement.scrollTop > 700)
    // {
    //     alert("hello");
    //     about_tag.style.color = "red";
    // }
    else
    {
        img_tag.style.display = "block";
        brand_tag.style.display = "none";
        // about_tag.style.color = "black";
    }
}
home_tag=document.getElementById('color');
about_tag=document.getElementById('color2');
content_tag=document.getElementById('content');
skill_tag=document.getElementById('color3');
lan_tag=document.getElementById('color4');
por_tag=document.getElementById('color5');
con_tag=document.getElementById('color6');

window.addEventListener('scroll', () =>
 {
    if(document.documentElement.scrollTop > 600)
    {
        about_tag.style.color = "rgb(18, 219, 237)";
        home_tag.style.color = "black";
    }
    else
    {
        about_tag.style.color = "black";
        home_tag.style.color = "rgb(18, 219, 237)";
    }
 });
 window.addEventListener('scroll', () =>
 {
    if(document.documentElement.scrollTop > 1200)
    {
        skill_tag.style.color = "rgb(18, 219, 237)";
        about_tag.style.color = "black";
    }
    else
    {
        skill_tag.style.color = "black";
    }
 });
 window.addEventListener('scroll', () =>
 {
    if(document.documentElement.scrollTop > 1700)
    {
        lan_tag.style.color = "rgb(18, 219, 237)";
        skill_tag.style.color = "black";
    }
    else
    {
        lan_tag.style.color = "black";
    }
 });
 window.addEventListener('scroll', () =>
 {
    if(document.documentElement.scrollTop > 2350)
    {
        por_tag.style.color = "rgb(18, 219, 237)";
        lan_tag.style.color = "black";
    }
    else
    {
        por_tag.style.color = "black";
    }
 });
 window.addEventListener('scroll', () =>
 {
    if(document.documentElement.scrollTop > 3200)
    {
        con_tag.style.color = "rgb(18, 219, 237)";
        por_tag.style.color = "black";
    }
    else
    {
        con_tag.style.color = "black";
    }
 });
 

// function scrollEffect2()
// {
//     about_tag=document.getElementById('color2')
//     if(document.documentElement.scrollTop > 600)
//     {
//         about_tag.style.color = "red";
//     }
//     else
//     {
//         about_tag.style.color = "black";
//     }
// }

icon_tag=document.querySelector('.fa-bars');
navbar_tag=document.querySelector('.navbar');
nav_tag=document.querySelector('.nav');

$('.fa-bars').click(() =>
{
    $('.nav').toggle();
    // $('.nav').css("display","block");
    // $('.nav1')
})
// $('.fa-bars').click(() =>
// {
//     $('.navbar').css("height","70px");
//     $('.nav').css("display","none");
//     // $('.nav1')
// })




