/* ;(function () {
	'use strict';
	var sliderMain = function() {
		
	  	$('#fh5co-hero .flexslider').flexslider({
			animation: "fade",
			slideshowSpeed: 5000,
			directionNav: true,
			start: function(){
				setTimeout(function(){
					$('.slider-text').removeClass('animated fadeIn');
					$('.flex-active-slide').find('.slider-text').addClass('animated fadeIn');
					$('.flex-direction-nav').find('a').html('');
				}, 500);
			},
			before: function(){
				setTimeout(function(){
					$('.slider-text').removeClass('animated fadeIn');
					$('.flex-active-slide').find('.slider-text').addClass('animated fadeIn');
					$('.flex-direction-nav').find('a').html('');
				}, 500);
			}

	  	});

	}; */


	$(function(){
		//内容加载后的运动效果
		dataAnimate();	

		//手机版菜单
	
		
		//广告图轮播
		var ifloop=true;
		if($("#main_carousel .items").length==1){
			ifloop=false;
		}else{
			ifloop=true;
		}
		$("#main_carousel").owlCarousel({
			items:1,
			autoplay:true,
			loop:ifloop	
		});

		//产品轮播
		$(".pro_list").owlCarousel({
			loop:true,
			margin:30,
			responsiveClass:true,
			dots:false,
			nav:true,
			navText:[" "," "],
			
			responsive:{
				0:{
					items:1,
					
				},
				768:{
					items:2,
					
				},
				1000:{
					items:4,
					
					loop:true,
					margin:20,
					
				}
			}
		})

	});

/* 
}()); */
