$(function(){
	      $(".xiala").hide(0);
	      $(".xin_img1").hide();
	   		$(".xin_img1").show(300);	
		$(".toubuhover").mouseover(function(){
		 	$(this).children('.xiala').show();
		    $(this).children('li').children('.topwen').css("color","#FFFFFF");
		}).mouseout(function(){
			$(this).children('.xiala').hide(0);
			$(this).children('li').children('.topwen').css("color","black");
		});
		$(".zhonghouver").mouseover(function(){
			$(".zhonghouver").not(this).removeClass('zhonghong');
			$(this).addClass('zhonghong');
			$(this).children('a').css("color","#ffffff");
			var i= $(this).index();
			$(".xianshi").eq(i).siblings().hide();
			$(".xianshi").eq(i).show();
			
		}).mouseout(function(){
			$(this).children('a').css("color","black");

		});
//			$(".liebiao_lb").mouseover(function(){
//			$(this).children('a').css("color","#ffffff");
//		}).mouseout(function(){
//			$(this).children('a').css("color","black");
//				});
	});
