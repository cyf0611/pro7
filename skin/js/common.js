
/* $(function(){
    dataAnimate();	

    $("#subMenu > ul >li > a").click(function(){
        if($(this).next().is('ul')){
            if($(this).next('ul').css('display')=='none'){
                $(this).next('ul').slideDown();
                $(this).find('i').attr("class","fa fa-sort-down");
               
            }else{
                $(this).next('ul').slideUp();
                $(this).next('ul').find('ul').slideUp();
                $(this).find('i').attr("class","fa fa-sort-up");
            }
        }
    });
})
 */


;(function () {
	
	'use strict';

	
	$(function(){
		
	
		dataAnimate();
    
        $("#subMenu > ul >li > a").click(function(){
            if($(this).next().is('ul')){
                if($(this).next('ul').css('display')=='none'){
                    $(this).next('ul').slideDown();
                    $(this).find('i').attr("class","fa fa-sort-down");
                   
                }else{
                    $(this).next('ul').slideUp();
                    $(this).next('ul').find('ul').slideUp();
                    $(this).find('i').attr("class","fa fa-sort-up");
                }
            }
        });
		
	});


}());