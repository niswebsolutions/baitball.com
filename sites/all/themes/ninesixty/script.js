(function ($) {
jQuery(document).ready(function() {
//BEGIN


	// 
	$('#navigation li.expanded').hover(function() {
		$(this).find('.view-main-navigation').fadeIn('fast');
	}, function() {
		$(this).find('.view-main-navigation').slideUp('fast');
	});



//END!!!
})
}(jQuery));


