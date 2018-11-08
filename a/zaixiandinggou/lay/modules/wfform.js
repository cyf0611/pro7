/** layui-v1.0.9_rls MIT License By http://www.layui.com */ ;
layui.define("layer", function(e) {
	"use strict";
	var i = layui.jquery,
		t = layui.layer,
		a = layui.hint(),
		n = layui.device(),
		l = "wfform",
		r = ".wfform",
		s = "layui-this",
		o = "layui-hide",
		c = "layui-disabled",
		u = function() {
			this.config = {
				verify: {}
			}
		};
	u.prototype.set = function(e) {
		var t = this;
		return i.extend(!0, t.config, e), t
	}, u.prototype.verify = function(e) {
		var t = this;
		return i.extend(!0, t.config.verify, e), t
	}, u.prototype.on = function(e, i) {
		return layui.onevent(l, e, i)
	}, u.prototype.render = function(e) {
		var t = this,
			n = {};
		return e ? n[e] ? n[e]() : a.error("不支持的" + e + "表单渲染") : layui.each(n, function(e, i) {
			i()
		}), t
	};
	var d = function() {
			var e = i(this),
				a = f.config.verify,
				s = null,
				o = "layui-form-danger",
				c = {},
				u = e.parents(r),
				d = u.find("*[lay-verify]"),
				y = e.parents("form")[0],
				v = u.find("input,select,textarea"),
				h = e.attr("lay-filter");
			return layui.each(d, function(e, l) {
				var r = i(this),
					c = r.attr("lay-verify").split("|"),
					u = "",
					d = r.val();
				if (r.removeClass(o), layui.each(c, function(e, i) {
						var c = "function" == typeof a[i];
						if (a[i] && (c ? u = a[i](d, l) : !a[i][0].test(d))) return t.msg(u || a[i][1], {
							icon: 5,
							shift: 6
						}), n.android || n.ios || l.focus(), r.addClass(o), s = !0
					}), s) return s
			}), !s && (layui.each(v, function(e, i) {
				i.name && (/^checkbox|radio$/.test(i.type) && !i.checked || (c[i.name] = i.value))
			}), layui.event.call(this, l, "submit(" + h + ")", {
				elem: this,
				form: y,
				field: c
			}))
		},
		f = new u,
		y = i(document);
	f.render(), y.on("reset", r, function() {
		setTimeout(function() {
			f.render()
		}, 50)
	}), y.on("submit", r, d).on("click", "*[lay-submit]", d), e(l, function(e) {
		return f.set(e)
	})
});