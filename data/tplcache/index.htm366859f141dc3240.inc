<?php
$z[0]=Array("global","",326,352);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",396,426);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",463,490);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1531,1566);
$z[3][4]=array();
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","\r\n    <div class='items'><img src='[field:picname/]' /></div>\r\n    ",1670,1818);
$z[4][4]=array();
$z[4][4]['typeid']="17";
$z[4][4]['row']="5";
$z[4][4]['titlelen']="50";
$z[4][4]['orderby']="pubdate";
$z[5]=Array("arclist","\r\n        <div class='news_list clearfix not-animated'  data-animate=\"slideInUp\" data-delay=\"400\">\r\n          <div class='date'><span>[field:pubdate function=\"MyDate('d',@me)\"/]</span><span>[field:pubdate function=\"MyDate('Y/m',@me)\"/]</span></div>\r\n          <div class='content2'>\r\n            <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n            <div class=\"desc\">[field:description function=\"cn_substr(@me,60)\"/]...</div>\r\n          </div>\r\n        </div>\r\n        ",2185,2775);
$z[5][4]=array();
$z[5][4]['typeid']="4";
$z[5][4]['limit']="0,2";
$z[5][4]['titlelen']="32";
$z[5][4]['orderby']="pubdate";
$z[6]=Array("arclist","\r\n          <div class=\"item item1\">\r\n            <div class=\"media-img\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" style=\"width:270px;height:130px;\"/></a></div>\r\n            <div class=\"content\">\r\n              <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n              <span class='time'>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span>\r\n              <div class=\"desc\">[field:description function=\"cn_substr(@me,200)\"/]...</div>\r\n            </div>\r\n          </div>\r\n          ",2912,3571);
$z[6][4]=array();
$z[6][4]['typeid']="4";
$z[6][4]['limit']="3,2";
$z[6][4]['titlelen']="32";
$z[6][4]['orderby']="pubdate";
$z[7]=Array("arclist","\r\n        <div class='items wow fadeInUp' data-wow-delay='.2s'>\r\n          <div class='pro_box'>\r\n            <h2>[field:title/]</h2>\r\n            <p>[field:description function=\"cn_substr(@me,200)\"/]...</p>\r\n            <span class='more'><a href='[field:arcurl/]' >More</a></span>\r\n            <div class='pro_img'><img src='[field:picname/]' /></div>\r\n          </div>\r\n        </div>\r\n        ",3959,4436);
$z[7][4]=array();
$z[7][4]['typeid']="7";
$z[7][4]['row']="8";
$z[7][4]['titlelen']="50";
$z[7][4]['orderby']="pubdate";
$z[8]=Array("sql"," \r\n              \r\n              [field:content  function='cn_substr(html2text(@me),800)'/]...\r\n              \r\n              ",5035,5232);
$z[8][4]=array();
$z[8][4]['sql']="Select content from dede_arctype where id=2";
$z[9]=Array("type"," <a href=\"[field:typelink/]\"><span>查看更多</span></a>",5681,5773);
$z[9][4]=array();
$z[9][4]['typeid']="2";
$z[10]=Array("include","",5881,5918);
$z[10][4]=array();
$z[10][4]['filename']="footer.htm";

?>