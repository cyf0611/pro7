<?php
$z[0]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",1548,1640);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channelartlist","\r\n          <li class='{dede:field.currentstyle/}'><a class=\"first-level\" href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}<span class=\"downward\"></span></a>\r\n            <ul class=\"drop-menu\">\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",1706,2202);
$z[1][4]=array();
$z[1][4]['typeid']="1,4,7";
$z[1][4]['currentstyle']="current";
$z[2]=Array("channelartlist","\r\n          <li class='{dede:field.currentstyle/}'><a class=\"first-level\" href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}<span class=\"downward\"></span></a>\r\n            <ul class=\"drop-menu\">\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",2238,2740);
$z[2][4]=array();
$z[2][4]['typeid']="11,14,15,16";
$z[2][4]['currentstyle']="current";
$z[3]=Array("channelartlist","\r\n            <li><a {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n              @me=is_array(\$row)?'href=\"javascript:void(0);\"':'';\r\n              {/dede:field} href=\"{dede:field name='typeurl'/}\"><strong>{dede:field name='typename'/}</strong> <i {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n              @me=is_array(\$row)?'class=\"fa fa-sort-up\"':'style=\"display:none\"';\r\n              {/dede:field}\r\n              > </i> </a>\r\n              <ul class='dropdown'>\r\n                {dede:channel type='son' noself='yes'}\r\n                <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n                {/dede:channel}\r\n              </ul>\r\n            </li>\r\n            ",3031,4064);
$z[3][4]=array();
$z[3][4]['typeid']="top";

?>