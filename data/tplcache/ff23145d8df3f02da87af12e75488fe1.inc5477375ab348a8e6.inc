<?php
$z[0]=Array("field","\nglobal \$dsql;\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);\n              @me=is_array(\$row)?'href=\"javascript:void(0);\"':'';\n              ",7,288);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",295,323);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",333,362);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\nglobal \$dsql;\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);\n              @me=is_array(\$row)?'class=\"fa fa-sort-up\"':'style=\"display:none\"';\n              ",375,671);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\n                <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\n                ",750,894);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";

?>