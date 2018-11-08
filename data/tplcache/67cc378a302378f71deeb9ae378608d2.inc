<li class="wow fadeInUp" data-wow-delay="0.1s">
          <h3>{dede:field name='typename'/}</h3>
          <ul>
            {dede:channel type='son' noself='yes'}
            <li><a class="btn-medium btn-medium-main" href='[field:typeurl/]'><span>[field:typename/]</span></a></li>
            {/dede:channel}
          </ul>
        </li>