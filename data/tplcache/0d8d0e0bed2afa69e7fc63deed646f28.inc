<li><a {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);
              @me=is_array($row)?'href="javascript:void(0);"':'';
              {/dede:field} href="{dede:field name='typeurl'/}"><strong>{dede:field name='typename'/}</strong> <i {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);
              @me=is_array($row)?'class="fa fa-sort-up"':'style="display:none"';
              {/dede:field}
              > </i> </a>
              <ul class='dropdown'>
                {dede:channel type='son' noself='yes'}
                <li><a href='[field:typeurl/]'>[field:typename/]</a></li>
                {/dede:channel}
              </ul>
            </li>